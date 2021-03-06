#ifndef ae_order_h
#define ae_order_h

#include <string>
#include "types.h"

namespace ae
{

class order
{
public:

	order() {}

	order(const std::string& participant,
		  const std::string& instrument,
		  quantity_type quantity,
		  price_type price);

	void participant(const std::string& value) { m_participant = value; }
	const std::string participant() const { return m_participant; }

	void instrument(const std::string& value) { m_instrument = value; }
	const std::string instrument() const { return m_instrument; }

	void quantity(quantity_type value);
	quantity_type quantity() const { return m_quantity; } 

	void price(price_type value);
	price_type price() const { return m_price; }

	bool is_buy() const { return m_is_buy; }

	quantity_type remaining_quantity() const { return m_remaining_quantity; }

	size_t generation() const { return m_generation; }

	void bump_generation() const
	{
		m_generation = s_next_generation++;
	}

	quantity_type fill(quantity_type quantity);

private:

	bool m_is_buy;

	std::string m_participant;
	std::string m_instrument;

	quantity_type m_quantity;
	quantity_type m_remaining_quantity;

	price_type m_price;

	// generation tracks the age of an order for price selection. In a more sophisticated order
	// book this would be incremented after updates as well and used to sort within a price.
	mutable size_t m_generation = 0;

	static size_t s_next_generation;

};

std::istream& operator>>(std::istream& is, order& o);

} 

#endif
