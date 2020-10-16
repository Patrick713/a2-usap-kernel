cmd_fs/nls/nls_koi8-u.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/nls/nls_koi8-u.ko fs/nls/nls_koi8-u.o fs/nls/nls_koi8-u.mod.o;  true
