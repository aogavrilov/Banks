//
// Created by Alexey on 30.11.2020.
//

#ifndef BANKS_PERCENTPOLITICS_H
#define BANKS_PERCENTPOLITICS_H

#include <vector>
using namespace std;
class PercentPolitics {
    vector<float> Percents, Limits;

public:
    PercentPolitics(vector<float> Limits, vector<float> Percents) : Limits(Limits), Percents(Percents){};
    float GetPercent(float Money);
};


#endif //BANKS_PERCENTPOLITICS_H
