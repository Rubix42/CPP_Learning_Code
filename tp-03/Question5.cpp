#include <vector>
#include <iostream>

int main(){
    std::vector<int> v;
    for(int i = 2; i <= 100000;i++){
        v.push_back(i);
    }
    for(int i = 0; i < v.size() && i*i <= 100000;i++){
        auto it = std::next(v.begin(),i+1);
       
        while(it != v.end()){
            if (*it % v[i] == 0){
                it = v.erase(it);
            }else{
                it++;
            }
        }
    }
    for(auto i : v){
        std::cout << i << " ";
    }
    
    std::cout << v.size() << std::endl;
}