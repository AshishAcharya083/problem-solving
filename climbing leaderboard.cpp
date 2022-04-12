#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?isFullScreen=true
 vector<int> result;
 vector<int> finalResult;
void sortingSet(set<int> v , int x){

   // sort(v.begin() , v.end());
    for(int tempVar : v){
      //  cout<<x<<" ";
        result.push_back(tempVar);
    }
    sort(result.begin() , result.end());
    for(int i = 0 ; i< result.size() ; i++){
        if(result[i] == x){
            finalResult.push_back(i);
        }
    }


}

int main (){

        int rankLen, playerLen;
        set<int> leaderBoard;
        cin>>rankLen;

        vector<int> ranked;
   int temp = 0;
        for(int i = 0 ; i <rankLen ; i++){



            cin>>temp;
            leaderBoard.insert(temp);
           // ranked.push_back(temp);
        }

        cin>>playerLen;
            vector<int> tempVec;
        for(int i = 0 ; i< playerLen ; i++){
            int score;
            cin>>score;
          ranked.push_back(score);
          leaderBoard.insert(score);
            sortingSet(leaderBoard , score);

//          for(int val : leaderBoard){
//            tempVec.push_back(val);
//          }
//
//          result.push_back(sortingVector(tempVec));

        }
//
//      for(int value : leaderBoard){
//        cout<<value<<" ";
//        result.insert(result.begin(), value);
//      }
//
        for(int score : finalResult){
            cout<<score<<" ";
        }
}
