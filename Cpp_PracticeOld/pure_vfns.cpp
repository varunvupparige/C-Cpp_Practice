#include <iostream>

class Entity {

public:
    virtual  std::string GetName() { return "Entity"; }
};

class Player : public Entity {

private:
    std::string m_name;

public:
    Player(const std::string name)
        : m_name(name) {}

    std::string GetName() override { return m_name; }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}


int main()
{
    Entity *e = new Entity();
    //std::cout << e->GetName() << std::endl;
    PrintName(e);

    Player *p = new Player("Varun");
    //std::cout << p->GetName() << std::endl;
    PrintName(p);
}