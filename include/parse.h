#include <iostream>
#include <ranges>

namespace tppis {
	template<std::ranges::forward_range R>
	requires std::same_as<std::ranges::range_value_t<R>, char>
	bool lex(R&& r)
	{
		// comment: //[\s\S]*
		// 
		// statement: (<var declaration>
		//           | <var assignment>
		//           | <function declaration>
		//           | <return statement>
		//           | <break statement>
		//           | <loop>
		//           );
		// 
		// var declaration: ijo <var> (ante)? li jo e <expression>
		// 
		//   ante: variable shadowing
		// 
		// var assignment: ijo <var> li jo e <expression>
		// 
		//   cannot change type
		// 
		// function declaration: pali <func> (pi <param> (en <param>)*)? li { <function definition>) }
		// 
		// function definition: <block>
		// 
		// return statement: pana <expression>?
		// 
		//   only legal within a function definition
		// 
		// break statement: pini <expression>?
		// 
		//   only legal within a loop
		// 
		// loop: o mute { <block> }
		// 
		// block: <statement>* <expression>
		// 
		// expression: <var/literal>
		//           | <boolean expression>
		//           | <if expression>
		//           | <function call>
		// 
		// if expression: <boolean expression> la { <block> }
		// 
		// function call: o <func> (kepeken <var/literal> (en <var/literal>)*)?
		// 
		// boolean expression: <bool var/literal> (ala)?
		//                   | <var/literal> en <var/literal> li sama (ala)?
		//                   | (<boolean expression> en <boolean expression>) (ala)?
		//                   | (<boolean expression> anu <boolean expression>) (ala)?
		// 
		// var: <identifier>
		// 
		// func: <identifier>
		// 
		// param: <identifier>
		// 
		// identifier: [^\s&\|\[\]\(\)\?\*\.\+\-\\/\!\@\#\$\%\^\<\>\,\:\;\'\"\{\}0-9][^\s&\|\[\]\(\)\?\*\.\+\-\\/\!\@\#\$\%\^\<\>\,\:\;\'\"\{\}]+
		// 
		//   NOT keyword
		// 
		// keyword: ijo
		//        | li
		//        | jo
		//        | e
		//        | pali
		//        | pi
		//        | en
		//        | li
		//        | sama
		//        | la
		//        | o
		//        | anu
		//        | ala
		//        | lon
		//        | kepeken
		//        | pana
		//        | mute
		//        | pini
		//        | kin
		// 
		// literal: <scalar>
		//        | <compound>
		//        | <str>
		// 
		// scalar: <char>
		//       | <integer>
		//       | <float>
		//       | <bool>
		// 
		// char: '[^\']'
		// 
		//   4 bytes
		//   Unicode Scalar Value: U+0000-U+D7FF and U+E000-U+10FFFF
		// 
		// integer: ([0-9]([0-9_]*[0-9]+)?
		//      | 0b[01]([01_]*[01]+)?
		//      | 0o[0-7]([0-7_]*[0-7]+)?
		//      | 0x[0-9a-f]([0-9a-f_]*[0-9a-f]+)?
		//      | b<char>
		// 
		//   signed: i8, i16, i32, i64, i128, isize
		//     two's complement
		//   unsigned: u8, u16, u32, u64, u128, usize
		//   isize and usize are arch-dependent
		//   b<char> is u8
		//   default is i32
		// 
		// float: [0-9]+.[0-9]+
		// 
		//   f32 or f64
		//   default is f64
		// 
		// bool: lon
		//     | ala
		// 
		// compound: <tuple>
		//         | <array>
		// 
		// tuple: \( (<scalar> (en <scalar>)*)? \)
		// 
		// array: \[ (<scalar> (en <scalar>)*)? \]
		// 
		// str: "[^\"]*"
		// 
		//   array of chars
		// 

		std::cout << "INPUT: ";
		for (const auto& elem : r) {
			std::cout << elem;
		}
		return true;
	}
}