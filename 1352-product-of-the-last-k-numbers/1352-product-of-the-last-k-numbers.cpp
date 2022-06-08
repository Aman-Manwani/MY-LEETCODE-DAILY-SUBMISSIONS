class ProductOfNumbers {
public:
    vector<int>v={1};
    ProductOfNumbers() {
        
    }
    
    void add(int num)
    {
        if(num>=1)
        {
            v.push_back(num*v[v.size()-1]);
        }else
            v={1};
    }
    int getProduct(int k)
    {
        
        if(k>=v.size())
        {
            return 0;
        }
        cout<<v[v.size()-k-1]<<" ";
        return v[v.size()-1]/v[v.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */