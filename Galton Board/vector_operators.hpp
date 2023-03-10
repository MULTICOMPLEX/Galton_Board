
#ifndef __VECTOR_OPERATORS_HPP__
#define __VECTOR_OPERATORS_HPP__

template <typename T>
inline const std::vector<T> operator*
(
	const std::vector<T>& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] *= b[i];

	return v;
}

template <typename T>
inline const std::vector<Complex> operator*
(
	const Complex& b,
	const std::vector<T>& a
	)
{
	std::vector<Complex> v(a.size());

	for (auto i = 0; i < a.size(); i++)
		v[i] = b * a[i];

	return v;
}

template <typename T>
inline const std::vector<Complex> operator*
(
	const std::vector<T>& a,
	const Complex& b

	)
{
	std::vector<Complex> v(a.size());

	for (auto i = 0; i < a.size(); i++)
		v[i] = b * a[i];

	return v;
}

template <typename A, typename T>
inline const std::vector<T> operator*
(
	const std::vector<T>& a,
	const A& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] *= b;

	return v;
}

template <typename T>
inline std::vector<T> operator*=
(
	const T& a,
	std::vector<T>& b
	)
{
	for (auto i = 0; i < b.size(); i++)
		b[i] *= a;
	return b;
}

template <typename T>
inline const std::vector<T> operator*=
(
	const std::vector<T>& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] *= b[i];

	return v;
}

template <typename T>
inline std::vector<T> operator*=
(
	std::vector<T>& b,
	const T& a
	)
{
	for (auto i = 0; i < b.size(); i++)
		b[i] *= a;
	return b;
}

template <typename T>
inline const std::vector<T> operator/
(
	const std::vector<T>& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] /= b[i];

	return v;
}

template <typename T>
inline const std::vector<T> operator+
(
	const std::vector<T>& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] += b[i];

	return v;
}

template <typename T>
inline const std::vector<T> operator-
(
	const std::vector<T>& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] -= b[i];

	return v;
}

template <typename T>
inline const std::vector<T> operator+
(
	const T& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = b;

	for (auto i = 0; i < b.size(); i++)
		v[i] += a;

	return v;
}

template <typename T>
inline const std::vector<T> operator+
(
	const std::vector<T>& a,
	const T& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] += b;

	return v;
}

template <typename A, typename T>
inline const std::vector<T> operator+
(
	const std::vector<T>& a,
	const A& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] += b;

	return v;
}

template <typename T>
inline const std::vector<T> operator+=
(
	std::vector<T>& a,
	const std::vector<T>& b
	)
{
	for (auto i = 0; i < a.size(); i++)
		a[i] += b[i];

	return a;
}

template <typename T>
inline const std::vector<T> operator-
(
	const T& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = b;

	for (auto i = 0; i < b.size(); i++)
		v[i] -= a;

	return v;
}

template <typename T>
inline const std::vector<T> operator-
(
	const std::vector<T>& a
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] = -v[i];

	return v;
}

template <typename T>
inline const std::vector<T> operator-
(
	const std::vector<T>& a,
	const T& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] -= b;

	return v;
}

template <typename T>
inline const std::vector<T> operator/
(
	const T& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = b;

	for (auto i = 0; i < b.size(); i++)
		v[i] /= a;

	return v;
}

template <typename A, typename T>
inline const std::vector<T> operator/
(
	const A& a,
	const std::vector<T>& b
	)
{
	std::vector<T> v = b;

	for (auto i = 0; i < b.size(); i++)
		v[i] /= a;

	return v;
}

template <typename T>
inline const std::vector<T> operator/
(
	const std::vector<T>& a,
	const T& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] /= b;

	return v;
}

template <typename A, typename T>
inline const std::vector<T> operator/
(
	const std::vector<T>& a,
	const A& b
	)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] /= b;

	return v;
}

template <typename A, typename T>
inline const std::vector<T> operator/=
(
	std::vector<T>& a,
	const A& b
	)
{
	for (auto i = 0; i < a.size(); i++)
		a[i] /= b;

	return a;
}

template <typename T>
inline std::vector<T> operator/=
(
	const T& a,
	std::vector<T>& b
	)
{
	for (auto i = 0; i < b.size(); i++)
		b[i] /= a;
	return b;
}

template <typename T>
inline std::vector<T> operator/=
(
	std::vector<T>& b,
	const T& a
	)
{
	for (auto i = 0; i < b.size(); i++)
		b[i] /= a;
	return b;
}

template <typename T>
inline const std::vector<T> exp
(
	const std::vector<T>& a
)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] = exp(a[i]);

	return v;
}

template <typename T>
inline const std::vector<T> pow
(
	const std::vector<T>& a,
	const T& b
)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] = pow(a[i], b);

	return v;
}

template <typename A, typename T>
inline const std::vector<T> pow
(
	const std::vector<T>& a,
	const A& b
)
{
	std::vector<T> v = a;

	for (auto i = 0; i < a.size(); i++)
		v[i] = pow(a[i], b);

	return v;
}

#endif // __VECTOR_OPERATORS_HPP__

