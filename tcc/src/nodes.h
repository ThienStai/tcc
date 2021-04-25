#pragma once
typedef struct _NUMBER_NODE {
	double value;
} NUMBER_NODE;

typedef struct _ADD_NODE {
	double node_a, node_b;
}ADD_NODE;

typedef struct _SUBTRACT_NODE {
	double node_a, node_b;
}SUBTRACT_NODE;

typedef struct _MULTIPLY_NODE {
	double node_a, node_b;
}MULTIPLY_NODE;

typedef struct _DIVIDE_NODE {
	double node_a, node_b;
}DIVIDE_NODE;
