#include <iostream>

using namespace std;

void TowerOfHanoi(int m, string first, string middle, string last){
    if(m == 1){
        cout << "Moving disc 1 from " << first << " to " << last << endl;
    }
    else{
        TowerOfHanoi(m-1,first,last,middle);
        cout << "Moving disc " << m << " from " << first << " to " << last << endl;
        TowerOfHanoi(m-1,middle,first,last);
    }

}
int main(){
    int di;
    cin>>di;
    TowerOfHanoi(di, "FirstTower","SecondTower","ThirdTower");
    return 0;
}