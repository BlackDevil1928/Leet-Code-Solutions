var minimumTime = function(n, relations, time) {
    const graph = Array(n).fill(null).map(() => []);
    
    for (const [prev, next] of relations) {
        graph[next - 1].push(prev - 1);
    }
    
    const memo = new Array(n).fill(0);
    let overallMinTime = 0;
    
    for (let course = 0; course < n; course++) {
        overallMinTime = Math.max(overallMinTime, calculateTime(course, graph, time, memo));
    }
    
    return overallMinTime;
    
    function calculateTime(course, graph, time, memo) {
        if (memo[course] !== 0) {
            return memo[course];
        }
        
        let maxPrerequisiteTime = 0;
        for (const prereq of graph[course]) {
            maxPrerequisiteTime = Math.max(maxPrerequisiteTime, calculateTime(prereq, graph, time, memo));
        }
        
        memo[course] = maxPrerequisiteTime + time[course];
        return memo[course];
    }
};