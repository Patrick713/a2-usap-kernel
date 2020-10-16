cmd_fs/nls/nls_koi8-r.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/nls/nls_koi8-r.ko fs/nls/nls_koi8-r.o fs/nls/nls_koi8-r.mod.o;  true
