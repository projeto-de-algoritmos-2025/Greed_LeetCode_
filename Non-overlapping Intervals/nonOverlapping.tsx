function eraseOverlapIntervals(intervals: number[][]): number {
    intervals.sort((a, b) => a[1] - b[1]);

    let removedCount = 0;
    let prevEnd = -Infinity;

    for (const [start, end] of intervals) {
        if (start >= prevEnd) {
            prevEnd = end;
        } else {
            removedCount++;
        }
    }

    return removedCount;
};