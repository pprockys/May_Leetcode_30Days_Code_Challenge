//pprockys;
class StockSpanner {

    stack< pair<int,int> > s;
public:
    StockSpanner() {}
    
    int next( int price ) {
        int daySpan = 1;
        while( !s.empty() && s.top().first <= price ) {
            daySpan += s.top().second;
            s.pop();
        }
        s.push( { price, daySpan } );
        return daySpan;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
