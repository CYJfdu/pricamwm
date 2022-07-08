#include<vector>
#include<cmath>

using namespace std;


class codetoseq
{

public:
    static vector<vector<int> >  seqmat(int code) ;
};

vector<vector<int> > codetoseq::seqmat(int code){
    vector<vector<int> > C(8,vector<int>(8, -1));
    vector<int> codeslice;
    int temp = code;
    while(temp){
        int t = temp % 10;
        switch (t) //余3码
        {
        case 0:
            codeslice.push_back(0);codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(0);
            break;
        case 1:
            codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(0);
            break;
        case 2:
            codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(1);
            break;
        case 3:
            codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(1);codeslice.push_back(0);
            break;
        case 4:
            codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(1);codeslice.push_back(1);
            break;
        case 5:
            codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(0);codeslice.push_back(0);
            break;
        case 6:
            codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(0);codeslice.push_back(1);
            break;
        case 7:
            codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(0);
            break;
        case 8:
            codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(1);codeslice.push_back(1);
            break;
        default:
            codeslice.push_back(1);codeslice.push_back(1);codeslice.push_back(0);codeslice.push_back(0);
            break;
        }
        temp /= 10;
    }
    int index = codeslice.size() - 1;
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            if( i == 0 && j < 4){
                C[i][j] = 0;
                continue;
            }
            if(index >= 0){
                if(codeslice[index] == 1) C[i][j] = 1;
                index --;
            }

        }
    }

    return C;
}

