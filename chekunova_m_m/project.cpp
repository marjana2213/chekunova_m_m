#define _USE_MATH_DEFINES
#define epsl  1e-7
#include "project.hpp"
#include <cmath>
#include <iostream>


std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& a) {
	return ostrm << "[x;y]" << "-> " << '[' << a.x << ';' << a.y << ']';
}

std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& a) {
	return ostrm << "(x;y)" << "-> " << '(' << a.r << ';' << a.phi << ')';
}

Rdec2D operator-(const Rdec2D& vector) {
	return { -vector.x, -vector.y };
}

Rdec2D operator+(const Rdec2D& vector1, const Rdec2D& vector2) {
	return { vector1.x + vector2.x, vector1.y + vector2.y };
}

Rdec2D operator-(const Rdec2D& vector1, const Rdec2D& vector2) {
	return { vector1.x - vector2.x, vector1.y - vector2.y };
}

Rdec2D operator*(const Rdec2D& vector, const double& z) {
	return { vector.x * z, vector.y * z };
}

Rdec2D operator/(const Rdec2D& vector, const double& z) {
	return { vector.x / z, vector.y / z };
}

double Dot(const Rdec2D vector1, const Rdec2D& vector2) {
	return { vector1.x * vector2.x + vector1.y * vector2.y };
}

double Norm(const Rdec2D vector) {
	return { sqrt(vector.x * vector.x + vector.y * vector.y) };
}

bool operator==(const Rdec2D& vector1, const Rdec2D& vector2) {
	return ((std::abs(vector1.x - vector2.x) < epsl) && (std::abs(vector1.y - vector2.y) < epsl));
}

bool operator!=(const Rdec2D& vector1, const Rdec2D& vector2) {
	return !((std::abs(vector1.x - vector2.x) < epsl) && (std::abs(vector1.y - vector2.y) < epsl));
}

Rpol2D ToPol(const Rdec2D& vector) {
	if (vector.y > 0) {
		return { Norm(vector), std::acos(vector.x / Norm(vector)) };
	}
	else {
		return { Norm(vector), 2 * M_PI - std::acos(vector.x / Norm(vector)) };
	}
}

Rdec2D ToDec(const Rpol2D& vector) {
	return { vector.r * std::cos(vector.phi), vector.r * std::sin(vector.phi) };
}

Rpol2D operator-(const Rpol2D& vector) {
	if (vector.phi >= M_PI) {
		return { vector.r, vector.phi - M_PI };
	}
	else {
		return { vector.r, vector.phi + M_PI };
	}
}

Rpol2D operator+(const Rpol2D& vector1, const Rpol2D& vector2) {
	Rdec2D vector3 = ToDec(vector1);
	Rdec2D vector4 = ToDec(vector2);
	return ToPol({ vector3.x + vector4.x, vector3.y + vector4.y });
}

Rpol2D operator-(const Rpol2D& vector1, const Rpol2D& vector2) {
	Rdec2D vector3 = ToDec(vector1);
	Rdec2D vector4 = ToDec(vector2);
	return ToPol({ vector3.x - vector4.x, vector3.y - vector4.y });
}

Rpol2D operator*(const Rpol2D& vector, const double& z) {
	return { vector.r * z, vector.phi };
}

double Dot(const Rpol2D& vector1, const Rpol2D& vector2) {
	return { (vector1.r * vector2.r * std::cos(std::abs(vector1.phi - vector2.phi))) };
}

bool operator==(const Rpol2D& vector1, const Rpol2D& vector2) {
	return ((std::abs(vector1.r - vector2.r) < epsl) && (std::abs(vector1.phi - vector2.phi) < epsl));
}

bool operator!=(const Rpol2D& vector1, const Rpol2D& vector2) {
	return !((std::abs(vector1.r - vector2.r) < epsl) && (std::abs(vector1.phi - vector2.phi) < epsl));
}
