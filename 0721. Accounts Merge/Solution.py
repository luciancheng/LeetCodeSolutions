class UnionFind:
    def __init__(self, n):
        self.parent = [i for i in range(n)] # initialize an array for the parent nodes, from 0 to n-1, each index will point to another index which is its parent
        self.rank = [1] * n # each node will have an assigned rank, which is how many nodes it has as a parent, doesnt mean its the overall parent

    def union(self, x, y):
        p1, p2 = self.find(x), self.find(y) # find the representatives of the 2 nodes of interest
        if p1 == p2: # if they are the same node, then they are in the same disjoint set already
            return False
        if self.rank[p1] > self.rank[p2]: # the parent with the greater rank will become the overall parent
            self.parent[p2] = p1 # reassign the representative of p2 to become p1
            self.rank[p1] += self.rank[p2] # add the rank of the other tree to the total rank of the new overall parent
        else:
            self.parent[p1] = p2 
            self.rank[p2] += self.rank[p1]
        return True
    
    def find(self, x): # find the representative of the group
        # balanced graph approach
        while self.parent[x] != x:
            self.parent[x] = self.parent[self.parent[x]]
            x = self.parent[x]
        return x

        # recursive approach to finding the representative
        '''
        if (self.parent[x] != x):
            return self.find(self.parent[x])
        else:
            return x
        '''

        # iterative approach
        '''
        while x != self.parent[x]:
            s = self.parent[x]
        '''

class Solution:
    def accountsMerge(self, accounts: List[List[str]]) -> List[List[str]]:
        uf = UnionFind(len(accounts))

        # map every single email to an account # email -> index of account
        # keep track of every email and the account index it matches to
        # if we see the current email mapped to a different account index, must belong to the same person so we union those accounts together
        emailToAcc = {}

        for i, a in enumerate(accounts):
            for e in a[1:]:
                if e in emailToAcc: # email belongs to index i and belongs to another account if it is already in the hashmap to the one previously
                    # these 2 indices, should be merged together since they belong to the same account/person
                    uf.union(i, emailToAcc[e]) # union the accounts together since they have a matching email
                    # wont store duplicate emails in the emailToAcc dictionary, if weve seen it, just union it
                else:
                    emailToAcc[e] = i

        '''Map each acocunt index to its list of emails'''
        emailGroup = defaultdict(list) # index of account -> map it to the list of emails, wont have every single account, merge accounts, find an account that will act as leader when merged
        for e, i in emailToAcc.items(): # key and value
            leader = uf.find(i) # find the leader that the index i belongs to
            emailGroup[leader].append(e) # for every account, want to get all of the emails
        
        '''Join emails accounts together'''
        res = []
        for i, emails in emailGroup.items(): # key value pair
            name = accounts[i][0] # name of account
            res.append([name] + sorted(emails)) # get the name and the list of emails that belong to this group of email, concatenate array

        return res
