#pragma once

template<class T>
class CProxy_ISimpleComEvents :
	public IConnectionPointImpl<T, &__uuidof(_ISimpleComEvents)>
{
public:
};

