cmd_fs/hfs/hfs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/hfs/hfs.ko fs/hfs/hfs.o fs/hfs/hfs.mod.o;  true
