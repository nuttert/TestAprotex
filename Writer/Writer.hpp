#pragma once
#include "Models/Token.hpp"

#include <string>


namespace reverser
{
    class Writer
    {
    public:
        virtual void Start() const = 0;
        virtual void Stop() const = 0;
        virtual void WriteToken(const Token &token) const = 0;
    };
} // namespace reverser