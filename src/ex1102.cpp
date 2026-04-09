#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ifstream in ("data.txt");
    vector<int> data;
    int x;
    while(in >> x) {
        data.push_back(x);
    }
    in.close();

    int min_val = *min_element(data.begin(), data.end());
    int max_val = *max_element(data.begin(), data.end());

    double sum = 0.0;
    for(int x : data) {
        sum += x;
    }

    double mean = sum / data.size();

    double var = 0.0;

    for(int x : data){
        var += (mean - x) * (mean - x);
    }

    var = var/data.size();

    double sd = sqrt(var);

    //Histogram
    vector<int> freq(11, 0);
    for (int x : data){
        if(x >= 1 && x <= 10) {
            freq[x]++;
        }
    }

    std::cout << "\nHistogram (1 to 10):\n";
    for(int i = 1; i <= 10; i++){
        std::cout << std::setw(2) << i << " | ";
        int bar_length = freq[i] / 2;
        for(int j = 0; j < bar_length; j++){
            std::cout << "*";
        }
        std::cout << " (" << freq[i] << ")\n";
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n\nSummary:\n";
    std::cout << "count: " << data.size() << std::endl;
    std::cout << "Min: " << min_val << std::endl;
    std::cout << "Max: " << max_val << std::endl;
    std::cout << "Mean: " << mean << std::endl;

    return 0;

}