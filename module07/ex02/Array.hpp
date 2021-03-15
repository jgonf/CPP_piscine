#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>

class Array{

	private:

	public:
		Array<T>(void)
		{
			T *array;
		}

		Array<T>(unsigned int n)
		{
			T *array[n];
			for (unsigned int i = 0; i < n ; i++)
				array[i] = 0;
		}
};

#endif
