cmd_net/openvswitch/vport-vxlan.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/openvswitch/vport-vxlan.ko net/openvswitch/vport-vxlan.o net/openvswitch/vport-vxlan.mod.o;  true
