#pragma once

#include <initializer_list>
#include <iostream>
#include <vector>

template <typename Cell_t>
class GameBoard2D
{
private:
   std::vector<Cell_t> m_cells; 
public:
    GameBoard2D(std::initializer_list<Cell_t> initial_cells)
    : m_cells{}
    {
        for(const auto& cell : initial_cells)
        {
            m_cells.push_back(cell);
        }
    }
    const std::vector<Cell_t>& get_cells() const { return m_cells; }
};