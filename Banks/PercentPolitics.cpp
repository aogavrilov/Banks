//
// Created by Alexey on 30.11.2020.
//

#include "PercentPolitics.h"
float PercentPolitics::GetPercent(float Money) {
    int posPercent = 0;
    for(int i = 0; i < Limits.size(); i++){
        if(Money < Limits[i])
            posPercent = i;
        else
            break;
    }
    return Percents[posPercent];
}