#include <iostream>
#include <ranges>

namespace tppis {
	template<std::ranges::forward_range R>
	requires std::same_as<std::ranges::range_value_t<R>, char>
	bool lex(R&& r)
	{

		std::cout << "INPUT: ";
		for (const auto& elem : r) {
			std::cout << elem;
		}
		return true;
	}
}