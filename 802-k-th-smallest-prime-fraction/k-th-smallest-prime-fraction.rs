impl Solution {
    pub fn kth_smallest_prime_fraction(arr: Vec<i32>, k: i32) -> Vec<i32> {
        let mut l=0.;
        let mut r=1.;
        while (r-l>f64::EPSILON) {
            let mid=(l+r)/2.;
            let mut max=-1.;
            let mut mi=0;
            let mut mj=0;
            let mut cnt=0;
            let mut j=0;
            for (i,&k) in arr[..arr.len()-1].iter().enumerate() {
                while j<arr.len() && arr[i] as f64 >=mid*arr[j] as f64 {
                    j+=1;
                }
                cnt+=arr.len()-j;
                if j==arr.len() {
                    break;
                }
                let f=arr[i] as f64/(arr[j] as f64);
                if f-max>f64::EPSILON {
                    mi=i;
                    mj=j;
                    max=f;
                }
            }
            if cnt == k as usize {
                return vec![arr[mi],arr[mj]];
            }
            else if cnt>k  as usize{
                r=mid;
            } else {
                l=mid;
            }
        }
        vec![]
    }
}