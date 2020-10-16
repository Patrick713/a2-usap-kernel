cmd_fs/nls/nls_utf8.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/nls/nls_utf8.ko fs/nls/nls_utf8.o fs/nls/nls_utf8.mod.o;  true
