#include <map>
#include <iostream>
#include <queue>
using namespace std;
struct Topic
{
    long long int id;
    long long int old_score,new_score,change;
    Topic(long long int _id, long long int _old_score,long long int _new_score )
    {
        id = _id;
        old_score = _old_score;
        new_score = _new_score;
        change = new_score - old_score;
    }
    bool operator<(const Topic &other) const
    {
        return change < other.change || (change == other.change && id < other.id);
    }
};
int main()
{
    priority_queue<Topic> pq;
    int n;
    cin>>n;
    long long int temp,id,z,p,l,c,s;
    for(int i = 0;i<n;i++)
    {
        cin>>id>>z>>p>>l>>c>>s;
        temp = p*50 +l*5+c*10+s*20;
        pq.push(Topic(id,z,temp));
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        Topic t = pq.top();
        cout<<t.id<<" ";
        cout<<t.new_score<<endl;
        pq.pop();
    }
return 0;
}
