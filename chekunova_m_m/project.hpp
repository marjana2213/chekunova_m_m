
#include <iosfwd>

struct Rdec2D {
	double x = 0.0;
	double y = 0.0;
};

struct Rpol2D {
	double r = 0.0;
	double phi = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& a);

std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& a);

Rdec2D operator-(const Rdec2D& vector);

Rdec2D operator+(const Rdec2D& vector1, const Rdec2D& vector2);

Rdec2D operator-(const Rdec2D& vector1, const Rdec2D& vector2);

Rdec2D operator*(const Rdec2D& vector, const double& z);

Rdec2D operator/(const Rdec2D& vector, const double& z);

double Dot(const Rdec2D vector1, const Rdec2D& vector2);

double Norm(const Rdec2D vector);

bool operator==(const Rdec2D& vector1, const Rdec2D& vector2);

bool operator!=(const Rdec2D& vector1, const Rdec2D& vector2);

Rpol2D ToPol(const Rdec2D& vector);

Rdec2D ToDec(const Rpol2D& vector);

Rpol2D operator-(const Rpol2D& vector);

Rpol2D operator+(const Rpol2D& vector1, const Rpol2D& vector2);

Rpol2D operator-(const Rpol2D& vector1, const Rpol2D& vector2);

Rpol2D operator*(const Rpol2D& vector, const double& z);

double Dot(const Rpol2D& vector1, const Rpol2D& vector2);

bool operator==(const Rpol2D& vector1, const Rpol2D& vector2);

bool operator!=(const Rpol2D& vector1, const Rpol2D& vector2);
