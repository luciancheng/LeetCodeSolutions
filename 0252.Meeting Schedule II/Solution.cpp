/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

 bool customsort(Interval & a, Interval & b) {
    return a.start < b.start;
 }

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), customsort);

        vector<int> heap;

        // continuously check the smallest end time and be greedy, if we cant add it 
        // to the smallest, then we need a new day
        for (const Interval & interval : intervals) {
            if (heap.empty() || interval.start < -heap[0]) {
                heap.push_back(-interval.end);
            } else {
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();

                heap.push_back(-interval.end);
            }
            push_heap(heap.begin(), heap.end());
        }

        return heap.size();
    }
};
