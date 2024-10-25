//
// Created by thibodebelie on 10/25/24.
//

#ifndef CELL_H
#define CELL_H



class Cell
{
public:
    enum class Symbols:int{X , O};
    void setSymbol(const Symbols& symbol);
    const Symbols& getSymbol() const;

private:
    Symbols _symbol;

};



#endif //CELL_H
