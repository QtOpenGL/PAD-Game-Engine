namespace pad	{
namespace math	{

#pragma region Typedef

template<typename T>
using	Vec4	= Vector4<T>;
using	Vec4i	= Vector4<int>;
using	Vec4u	= Vector4<unsigned int>;
using	Vec4f	= Vector4<float>;
using	Vec4d	= Vector4<double>;

#pragma endregion

#pragma region Constructor / Destructor

template<typename T>
Vector4<T>::Vector4() :	
	x(0), 
	y(0),
	z(0),
	w(0)
{
}

template<typename T>
Vector4<T>::Vector4(const Vector4& _vector) :
	x(_vector.x), 
	y(_vector.y),
	z(_vector.z),
	w(_vector.w)
{
}

template<typename T>
template<typename U>
Vector4<T>::Vector4(const Vector3<U>& _vector) :
	x(_vector.x),
	y(_vector.y),
	z(_vector.z),
	w(1)
{
}

template<typename T>
Vector4<T>::Vector4(const T _x, const T _y, const T _z, const T _w) :
	x(_x),
	y(_y),
	z(_z),
	w(_w)
{
}

#pragma endregion

#pragma region Member Functions

template<typename T>
float Vector4<T>::DotProduct(const Vector4& _vector) const
{
	return (x * _vector.x) + (y * _vector.y) + (z * _vector.z) + (w * _vector.w);
}

template<typename T>
float Vector4<T>::Length() const
{
	return sqrt((x * x) + (y * y) + (z * z) + (w * w));
}

template<typename T>
void Vector4<T>::Normalize()
{
	if (!IsNull())
		*this /= Length();
}

template<typename T>
Vector4<T> Vector4<T>::Normalized()
{
	if (!IsNull())
		return (*this / Length());
}

template<typename T>
bool Vector4<T>::IsNull() const
{
	return (x == 0 && y == 0 && z == 0 && w == 0);
}

template<typename T>
bool Vector4<T>::IsUnit() const
{
	return (Length == 1.f);
}

#pragma endregion

#pragma region Operator

template <typename T>
void Vector4<T>::operator=(const Vector4& _vector)
{
	x = _vector.x;
	y = _vector.y;
	z = _vector.z;
	w = _vector.w;
}

template <typename T>
bool Vector4<T>::operator==(const Vector4& _vector)
{
	return (	x == _vector.x 
			&&	y == _vector.y 
			&&	z == _vector.z
			&&	w == _vector.w);
}

template <typename T>
Vector4<T> Vector4<T>::operator+(const Vector4& _vector)
{
	return Vector3<T>(	x + _vector.x, 
						y + _vector.y,
						z + _vector.z,
						w + _vector.w);
}

template <typename T>
Vector4<T>& Vector4<T>::operator+=(const Vector4& _vector)
{
	x += _vector.x;
	y += _vector.y;
	z += _vector.z;
	w += _vector.w;
	return *this;
}

template <typename T>
Vector4<T> Vector4<T>::operator-(const Vector4& _vector)
{
	return Vector3<T>(	x - _vector.x, 
						y - _vector.y,
						z - _vector.z,
						w - _vector.w);
}

template <typename T>
Vector4<T>& Vector4<T>::operator-=(const Vector4& _vector)
{
	x -= _vector.x;
	y -= _vector.y;
	z -= _vector.z;
	w -= _vector.w;
	return *this;
}

template <typename T>
Vector4<T> Vector4<T>::operator*(const float _scalar)
{
	return Vector3<T>(	x * _scalar, 
						y * _scalar,
						z * _scalar,
						w * _scalar);
}

template <typename T>
Vector4<T>& Vector4<T>::operator*=(const float _scalar)
{
	x *= _scalar;
	y *= _scalar;
	z *= _scalar;
	w *= _scalar;
	return *this;
}

template <typename T>
Vector4<T> Vector4<T>::operator/(const float _scalar)
{
	return Vector3<T>(	x / _scalar, 
						y / _scalar,
						z / _scalar,
						w / _scalar);
}

template <typename T>
Vector4<T>& Vector4<T>::operator/=(const float _scalar)
{
	x /= _scalar;
	y /= _scalar;
	z /= _scalar;
	w /= _scalar;
	return *this;
}

#pragma endregion

#pragma region Utils

template <typename T>
std::ostream& operator<<(std::ostream& _out, const Vector4<T>& _vector)
{
	return _out << "(" << _vector.x << ", " << _vector.y << ", " << _vector.z << ", " << _vector.w << ")";
}

#pragma endregion

} // namespace math
} // namespace pad