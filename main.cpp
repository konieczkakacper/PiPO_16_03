#include <string>

class Order{};

class Customer
{
private:
    std::string promoCode;
    const std::string DEFAULT_PROMO_CODE;
    void  modifyOrderStats();

protected:
    std::string phone;

public:
    bool placeOrder(Order &o);
};

class DiagramUML
{
private:
protected:
public:
};

class DiagramZachowan: public DiagramUML
{
};
