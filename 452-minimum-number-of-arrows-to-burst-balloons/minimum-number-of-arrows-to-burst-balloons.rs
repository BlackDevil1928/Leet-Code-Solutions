impl Solution {
    pub fn find_min_arrow_shots(mut points: Vec<Vec<i32>>) -> i32 {
        // Sort the balloons based on their end coordinates
        points.sort_by(|a, b| a[1].cmp(&b[1]));

        let mut arrows = 1;
        let mut prev_end = points[0][1];

        // Count the number of non-overlapping intervals
        for i in 1..points.len() {
            if points[i][0] > prev_end {
                arrows += 1;
                prev_end = points[i][1];
            }
            
        }

        arrows
    }
}