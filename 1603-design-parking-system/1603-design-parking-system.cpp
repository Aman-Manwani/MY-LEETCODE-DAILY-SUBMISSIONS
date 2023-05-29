class ParkingSystem {
public:
    int bigSpace,mediumSpace,smallSpace;
    ParkingSystem(int big, int medium, int small) {
        bigSpace = big;
        mediumSpace = medium;
        smallSpace = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1)
        {
            if(bigSpace>0)
            {
                bigSpace--;
                return true;
            }else
                return false;
        }
        if(carType == 2)
        {
            if(mediumSpace>0)
            {
                mediumSpace--;
                return true;
            }else
                return false;
        }
        if(carType == 3)
        {
            if(smallSpace>0)
            {
                smallSpace--;
                return true;
            }else
                return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */