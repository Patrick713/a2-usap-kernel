cmd_crypto/async_tx/async_pq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/async_tx/async_pq.ko crypto/async_tx/async_pq.o crypto/async_tx/async_pq.mod.o;  true
