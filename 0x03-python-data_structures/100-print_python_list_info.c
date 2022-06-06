#include <stdio.h>
#include <python.h>

/**
 * print_python_list_info - prints info about a python list
 * @p: pyobject
 *
 * Return: void
 */

void print_python_list_info(PyObject *p)
{
	long int size, i;
	PyListObject *list;
	PyObject *item;

	size = Py_SIZE(p);
	printf("[*] size of the Python list = %d\n", size);

	list = (PyListObject *)p;
	printf("[*] Allocated = %1d\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %1d: %s\n", i, Py_TYPE(item)->tp_name);
	}
}	
