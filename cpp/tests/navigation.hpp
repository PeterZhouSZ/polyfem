#pragma once

#include <geogram/mesh/mesh.h>


namespace poly_fem
{

	namespace Navigation
	{

	struct Key
	{
		int v;  // vertex
		int e;  // edge
		int f;  // face
		int fc; // face corner
	};

	void prepare_mesh(GEO::Mesh &M);

	Key switch_vertex(const GEO::Mesh &M, Key idx);

	Key switch_edge(const GEO::Mesh &M, Key idx);

	Key switch_face(const GEO::Mesh &M, Key idx);

	} // namespace Navigation

} // namespace poly_fem
