#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x56efbc6b, "snd_midi_event_reset_decode" },
	{ 0x1cff6e14, "snd_midi_event_reset_encode" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3b80b290, "snd_rawmidi_kernel_release" },
	{ 0x3f27ffd9, "snd_seq_create_kernel_client" },
	{ 0xef610666, "snd_rawmidi_kernel_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0xa7c55b34, "snd_rawmidi_input_params" },
	{ 0x4b005858, "__snd_seq_driver_register" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xbbdbd226, "snd_rawmidi_drain_output" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0xae9791f9, "snd_rawmidi_kernel_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a7b87a1, "snd_rawmidi_kernel_read" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xad4e3f69, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x716acfb5, "snd_seq_driver_unregister" },
	{ 0xfb7a6401, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device");


MODULE_INFO(srcversion, "AD53094BDFCFEA672729D41");
