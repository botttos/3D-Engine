#pragma once

enum ComponentType
{
	C_TRANSFORM = 0,
	C_MESH,
	C_MATERIAL
};

class Component
{
public:
	Component(ComponentType type);
	virtual ~Component();

	virtual void Update();
	virtual void Enable();
	virtual void Disable();

	ComponentType type;

private:
	bool active;
};