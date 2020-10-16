cmd_lib/raid6/raid6_pq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/raid6/raid6_pq.ko lib/raid6/raid6_pq.o lib/raid6/raid6_pq.mod.o;  true
