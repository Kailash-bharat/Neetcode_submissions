class MedianFinder {

private:
    vector<int> v;
    int n;

public:
    MedianFinder() {
        n=0;
    }
    
    void addNum(int num) {
        n++;
        v.push_back(num);
        for(int i=n-1;i>0;i--){
            if(v[i]<v[i-1]) swap(v[i],v[i-1]);
        }
    }
    
    double findMedian() {
        double median;
        if(n%2==0){
            median=v[n/2];
            median+=v[(n-1)/2];
            median/=2.0;
        }
        else median=v[n/2];
        return median;
    }
};
