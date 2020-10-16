cmd_net/mpls/mpls_gso.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/mpls/mpls_gso.ko net/mpls/mpls_gso.o net/mpls/mpls_gso.mod.o;  true
