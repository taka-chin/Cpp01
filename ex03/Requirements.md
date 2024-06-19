# Weaponクラス
## private:
	std::string type
## public:
	getter
	setter

# HumanAクラス
## private:
	std::string name
	Weapon weapon
## public:
	attack();

# HumanBクラス
## 同上

# Diff HumanA and HumanB
## While HumanA takes the Weapon in its constructor, HumanB doesn’t.
## HumanB may not always have a Weapon, whereas HumanA will always be armed.
