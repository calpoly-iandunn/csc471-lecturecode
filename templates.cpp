


template <typename T>
class vec2
{
	T x;
	T y;

public:

	void add(const vec2<T> &other)
	{
		x += other.x;
		y += other.y;
	}

	vec2<T> operator + (const vec2<T> &other)
	{
		vec2<T> ret;
		ret.x = x + other.x;
		ret.y = y + other.y;
		return ret;
	}
};



int main()
{
	vec2<float> a, b;

	b = a;

	a = b + a;

	return 0;
}
