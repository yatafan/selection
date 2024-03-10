#pragma once

#include <string>
#include <vector>
#include <cstdint>

#include "Gen.h"

class Plant{
protected:
	//Сюда параметры писать, p для примера
	enum class PARAMETERS{ p };

	//А сюда свойства писать
	enum class PROPERTIES{ p };

	std::string 				plant_class; 			//Класс растения
	std::vector<Gen> 			gens;   				//Набор генов
	float 						mutation_probability; 	//Вероятность мутации
	uint8_t 					rarity; 				//Редкость
	std::vector<PARAMETERS> 	parametrs; 				//Основные параметры растения
	std::vector<PROPERTIES> 	properties; 			//Уникальные свойства растения
};
