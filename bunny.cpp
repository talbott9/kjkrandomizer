
        constexpr auto&& w = "\033[107m"; /* White */
        constexpr auto&& b = "\033[40m";  /* Black border */
	constexpr auto&& r = "\033[101m"; /* Red */
	constexpr auto&& o = "\033[43m"; /* Orange */
        constexpr auto&& g = "\033[102m"; /* Green */
        constexpr auto&& p = "\033[105m"; /* Pink */
	constexpr auto&& a = "\033[104m";      /* Blue background */
	constexpr auto&& d = "\033[0m";

	const char* drawing[] = { 
	a,a,a,a,a,a,a,a,a,a,a,
	a,a,a,a,a,a,b,a,a,a,a,
	a,b,a,a,a,b,w,b,a,a,a,
	b,w,b,a,a,b,w,b,a,a,a,
	a,b,w,b,a,b,w,b,a,a,a,
	a,b,w,b,a,b,w,b,a,a,a,
	a,a,b,w,b,b,w,b,a,a,a,
	a,b,w,w,w,w,w,b,a,a,a,
	a,b,w,b,w,b,w,b,a,a,a,
	a,b,w,b,w,b,w,b,a,a,a,
	a,b,w,w,w,w,w,b,a,a,a,
	a,a,b,b,b,b,b,a,a,a,a
};
