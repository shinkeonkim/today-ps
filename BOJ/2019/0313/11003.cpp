// 문제 번호:11003 문제 이름: 최솟값 찾기
// 문제 최초 시도: 2019_03_08
// 문제 풀이 완료: 2019_03_13
// 최초 접근법 : 세그먼트 트리 => N의 범위가 5000000이고 세그먼트 트리의 시간복잡도는 O(nlogn)이기 때문에 실패했음.
// 이 코드의 접근법: priority_queue에 숫자를 순서대로 넣으면서 priority_queue의 top이 L 범위 내에 있지 않다면 pop 해버리면서 
// 커팅하고 최소값을 찾아내는 방법임.

#include <iostream>
#include <queue>
using namespace std;
struct st{
    int A,C; //A는 배열의 몇번째 값인지 저장, C는 배열값 저장 
};ka

struct compare{
    bool operator()(st a, st b) // priority_queue => bool operator 생성
    {
        return a.C>b.C;
    }
};

priority_queue <st,vector<st>,compare> Q; // priority_queue 생성
int N,L,ar[5500000]; //N은 숫자의 개수, L은 최소값을 찾는 범위,ar[]은 문제에서 주어진 숫자 저장
st Z;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    // 위의 3줄은 C++ 의 입출력을 빠르게 하기 위한 코드
    cin>>N>>L; // N과 L 입력
    for(int x=1; x<=N; x++) //일단 ar[]에 숫자 입력
    {
        cin>>ar[x];
    }
    for(int x=1; x<=N; x++) //ar[]에 있는 숫자들을 차례대로 넣음.
    {
        Z.A=x;
        Z.C=ar[x];
        Q.push(Z);
        while(!(x-L+1<=Q.top().A&&Q.top().A<=x)) //만약 Q의 top에 있는 숫자가 L범위 내에 있는 숫자가 아니었다면 pop()
        {
            Q.pop();
        }
        cout<<Q.top().C<<" "; // 위의 while문에 의해서 top()이 L 범위 내의 최솟값이므로 출력함
    }

}
