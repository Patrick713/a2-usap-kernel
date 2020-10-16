cmd_lib/lru_cache.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o;  true
