cmd_net/8021q/8021q.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/8021q/8021q.ko net/8021q/8021q.o net/8021q/8021q.mod.o;  true
