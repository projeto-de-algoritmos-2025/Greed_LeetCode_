function scheduleCourse(courses: number[][]): number {
    courses.sort((a, b) => a[1] - b[1]);
    
    const durations: number[] = [];
    let totalTime = 0;

    for (const [duration, lastDay] of courses) {
        totalTime += duration;
        durations.push(duration);

        if (totalTime > lastDay) {
            let maxIndex = 0;
            for (let i = 1; i < durations.length; i++) {
                if (durations[i] > durations[maxIndex]) {
                    maxIndex = i;
                }
            }
            totalTime -= durations[maxIndex];
            durations.splice(maxIndex, 1);
        }
    }

    return durations.length;
}