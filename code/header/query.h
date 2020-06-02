// file: header/query.h

#ifdef LIBRG_EDITOR
#include <librg.h>
#endif

LIBRG_BEGIN_C_DECLS

// =======================================================================//
// !
// ! World data/query methods
// !
// =======================================================================//

LIBRG_API size_t librg_world_query(librg_world *, int64_t owner_id, LIBRG_OUT int64_t *entity_ids, size_t buffer_limit);
LIBRG_API size_t librg_world_fetch_all(librg_world *, LIBRG_OUT int64_t *entity_ids, size_t buffer_limit);
LIBRG_API size_t librg_world_fetch_chunk(librg_world *, librg_chunk, LIBRG_OUT int64_t *entity_ids, size_t buffer_limit);
LIBRG_API size_t librg_world_fetch_chunkarray(librg_world *, const librg_chunk *chunks, size_t chunk_amount, LIBRG_OUT int64_t *entity_ids, size_t buffer_limit);
LIBRG_API size_t librg_world_fetch_owner(librg_world *, int64_t owner_id, LIBRG_OUT int64_t *entity_ids, size_t buffer_limit);
LIBRG_API size_t librg_world_fetch_ownerarray(librg_world *, const int64_t *owner_ids, size_t owner_amount, LIBRG_OUT int64_t *entity_ids, size_t buffer_limit);

LIBRG_END_C_DECLS